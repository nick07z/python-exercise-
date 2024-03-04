
import re
person_info = []
total_num = 0
male_num = 0
female_num = 0
def show_menu():
    print('-----*-----'*4)
    print("                1.新建联系人")
    print("                2.显示全部联系人")
    print("                3.删除联系人 ")
    print("                4.修改联系人 ")
    print("                5.查找联系人 ")
    print("                6.统计 ")
    print("                7.清空通讯录 ")
    print("                8.关闭界面 ")
    print('-----*-----' * 4)
    choice = input("请输入功能对应的代号:")
    return choice

def add_info():
    per_dict = {}
    per_name = input('请输入联系人的姓名：')
    while True:
         phone_num = input('请输入联系人的手机号：')
         pattern = r"^1[3-9]\d{9}$"
         match = re.match(pattern, phone_num)
         if match:
             break
         else:
             print("*****手机号码可能有误，输入正确的手机号码*****")
             continue

    while True:
        per_email = input('请输入联系人的邮箱：')
        pattern = r"^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$"
        match = re.match(pattern, per_email)
        if match:
            break
        else:
            print("*****错误，请输入正确的邮箱*****")
            continue
    while True:
        gender = input('性别：')
        if gender not in ['男', '女']:
            print("性别只能为男或女，请重新输入")
            continue
        else:
            break
    per_adress = input('请输入联系人的地址：')
    per_dict.update({'姓名': per_name,
                     '手机号': phone_num,
                     '电子邮箱': per_email,
                     '性别':   gender,
                     '地址': per_adress
                     })
    person_info.append(per_dict)
    print("保存成功")
    return person_info


def show_info():
    if len(person_info) == 0:
        print('通讯录无信息')
    for i in person_info:
        print('--' * 6)
        for title, info in i.items():
            print(title + ':' + info)
        print('--*' * 6)

def dele_info():
    if len(person_info) != 0:
        del_name = input('请输入要删除的联系人姓名：')
        for i in person_info:
            if del_name in i.values():
                person_info.remove(i)
                print(person_info)
                print('删除成功')
            else:
                print('该联系人不在通讯录中')
    else:
        print('通讯录无信息')

def search_info():
    if len(person_info) != 0:

        query_name = input('请输入要查找的联系人姓名：')
        for i in person_info:
            if query_name in i.values():
                index_num = person_info.index(i)
                for title, info in person_info[index_num].items():
                    print(title + ':' + info)
                break
        else:
            print('该联系人不在通讯录中')
    else:
        print('通讯录无信息')

def change_info():
    if len(person_info) != 0:
        modi_info = input('请输入要修改的联系人姓名：')
        for i in person_info:
            if modi_info in i.values():
                index_num = person_info.index(i)
                dict_cur_perinfo = person_info[index_num]
                for title, info in dict_cur_perinfo.items():
                    print(title + ':' + info)
                print('****' * 10)
                print("a.修改联系人姓名：")
                print("b.修改联系人电话：")
                print("c.修改联系人的电子邮箱：")
                print("d.修改地址:")
                print("e.退出修改")
                print('****' * 10)
                while True:
                    del_name = input("请选择要修改的子项:")
                    if del_name == 'a':
                        modi_name = input('请输入新的名字：')
                        dict_cur_perinfo.update(姓名=modi_name)
                        print("修改成功了，已保存信息")
                        break
                    elif del_name == 'b':
                        modi_phone = input('请输入新的手机号：')
                        dict_cur_perinfo.update(手机号=modi_phone)
                        print("修改成功了，已保存信息")
                        break
                    elif del_name == 'c':
                        modi_email = input('请输入新的邮箱：')
                        dict_cur_perinfo.update(电子邮箱=modi_email)
                        print("修改成功，已保存信息")
                        break
                    elif del_name == 'd':
                        modi_adress = input('请输入新的地址：')
                        dict_cur_perinfo.update(地址=modi_adress)
                        print("修改成功，已保存信息")
                        break
                    elif del_name == 'e':
                        break
                    else:
                        print("输入选项必须为a-d请重新输入！")
                        continue
    else:
        print("通讯录暂无信息")

def total():
    total_num = len(person_info)
    male_count = sum(1 for person in person_info if person['性别'] == '男')
    female_count = sum(1 for person in person_info if person['性别'] == '女')
    print("现在的联系人总数是：",total_num)
    print("其中男性人数为：", male_count)
    print("女性人数为：", female_count)

def clear():
    print(person_info)

    while True:
     awe=input('是否全部清空')
     if awe == 'y':
        person_info.clear()
        print("已清空所有联系人信息：", person_info)
        break
     elif awe =='n':
         print("退出并返回主界面")
         break
def exit():
   exit()

while True:
    choice = show_menu()
    if choice == '1':
        add_info()
    elif choice == '2':
        show_info()
    elif choice == '3':
        dele_info()
    elif choice == '4':
        change_info()
    elif choice == '5':
        search_info()
    elif choice =='6':
        total()
    elif choice =='7':
        clear()
    elif choice == '8':
        exit()
    else:
        print("功能暂未开通，请重新输入···")

