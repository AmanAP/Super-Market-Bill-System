#includebitsstdc++.h
#includeiostream
using namespace std;

class Shopping {
private
    int pcode;
    int price;
    float dis;
    string pname;

public
    void menu();
    void admin();
    void buyer();
    void add();
    void edit();
    void rem();
    void list();
    void receipt();
};

void Shoppingmenu() {
label
    int choice;
    string email;
    string password;
f
    coutttn;
    couttt                                              n;
    couttt          SUPER  MARKET  MAIN  MANU           n;
    couttt                                              n;
    coutttnn;
    couttt .................................. n;
    couttt                                  n;
    couttt      1).  ADMINISTRATIVE         n;
    couttt                                  n;
    couttt      2).  BUYER                  n;
    couttt                                  n;
    couttt      3).  EXIT                   n;
    couttt                                  n;
    couttt .................................. n;
    couttt PLEASE ENTER YOUR CHOICE -nntt-  ;
    cinchoice;
    switch(choice) {
    case 1 {
        couttt PLEASE  LOGIN nn;
        couttt ENTER  YOUR  EMAIL  nntt-  ;
        cinemail;
        coutntt ENTER  YOUR  PASSWORD nntt-  ;
        cinpassword;
        if(email==ashwin123@gmail.com && password==Ashwin123@) {
            admin();
            break;
        }
        else {
            coutttINVAILIDE  EMAIL  PASSWORD  n;
            goto f;
        }

    }

    case 2 {
        buyer();
    }

    case 3 {
        exit(0);
    }

    default  {
        coutttINVAILIDE  CHOICE n;
    }


    }
    goto label;

}

void Shoppingadmin() {
label
    int choice;
    coutendl;
    coutttn;
    couttt                                     n;
    couttt  WELCOME  IN  ADMINISTRATIVE  MENU  n;
    couttt                                     n;
    coutttn;
    couttt                                     n;
    couttt-1).  ADD  NEW  PRODUCT              n;
    couttt                                     n;
    couttt-2).  REMOVE  PRODUCT                n;
    couttt                                     n;
    couttt-3).  MODIFY  PRODUCT                n;
    couttt                                     n;
    couttt-4).  BACK  TO  MAIN  MENU           n;
    couttt                                     nn;
    couttt PLEASE ENTER YOUR CHOICE -nntt-  ;
    cinchoice;


    switch(choice) {
    case 1 {
        add();
        break;
    }

    case 2 {
        rem();
        break;
    }

    case 3 {
        edit();
        break;
    }

    case 4 {
        menu();
        break;
    }

    default  {
        coutttINVAILIDE  CHOICE n;
    }

    }
    goto label;
}


void Shoppingbuyer() {
label
    int choice;
    coutendl;
    coutttn;
    couttt                                     n;
    couttt        WELCOM IN  BUYER MENU        n;
    couttt                                     n;
    coutttn;
    couttt                                     n;
    couttt-1).  BUY  A  PRODUCT                n;
    couttt                                     n;
    couttt-2).  BACK  TO  MAIN  MENU           n;
    couttt                                     nn;
    couttt PLEASE ENTER YOUR CHOICE -nntt-  ;
    cinchoice;


    switch(choice) {
    case 1 {
        receipt();
        break;
    }

    case 2 {
        menu();
        break;
    }

    default  {
        coutttINVAILIDE  CHOICE n;
    }

    }
    goto label;
}


void Shoppingadd() {
label
    fstream data;
    int c;
    int token=0;
    float d;
    float p;
    string m;

    coutntt ADD  NEW  PRODUCT nn;
    coutntt ENTER  PRODUCT  CODE ntt- ;
    cinpcode;
    coutntt ENTER  PRODUCT  NAME ntt- ;
    cinpname;
    coutntt ENTER  PRODUCT  PRICE ntt- ;
    cinprice;
    coutntt ENTER  AVAILABLE DISCOUNT ntt- ;
    cindis;

    data.open(product.txt,iosin);

    if(!data) {
        data.open(product.txt,iosappiosout);
        data pcode pname price disn;
        data.close();
    } else {
        datacmpd;
        while(!data.eof()) {
            if(c==pcode) {
                token++;
            }
            datacmpd;
        }
        data.close();


        if(token==1) {
            coutntt DUPLICATE  RECORDEn;
            goto label;
        } else {
            data.open(product.txt,iosappiosout);
            data pcode pname price disn;
            data.close();

        }
    }
    couttt RECORD  INSERTED;
}


void Shoppingedit() {
    fstream data1,data2;
    int pkey;
    int token=0;
    int c;
    float p;
    float d;
    string m;

    coutnttMODIFY  THE  PRODUCT nn;
    couttt ENTER  THE PRODUCT  CODE ntt-;
    cinpkey;

    data1.open(product.txt,iosin);
    if(!data1) {
        coutPRODUCT  DOESN'T  FOUND;
    }
    else {
        data2.open(product1.txt,iosappiosout);
        data1pcodepnamepricedis;
        while(!data1.eof()) {
            if(pkey==pcode) {
                couttPRODUCT  NEW  CODEnt-;
                cinc;
                couttPRODUCT  NEW  NAMEnt-;
                cinm;
                couttPRODUCT  NEW  PRICE nt-;
                cinp;
                couttPROCT NEW  DISTCOUNTnt-;
                cind;
                data2 c
                      m
                      p
                      d
                     n;
                couttRECORD UPDATED ;
                token++;
            }
            else {
                data2 
                     pcode 
                     pname 
                     price 
                     disn;
            }
            data1pcodepnamepricedis;
        }
        data1.close();
        data2.close();
        remove(product.txt);
        rename(product1.txt,product.txt);
        if(token==0) {
            couttRECORD NOT FOUND ;
        }
    }
}


void Shoppingrem() {

    fstream data1,data2;
    int pkey;
    int token=0;

    coutnttDELETE  THE  PRODUCT nn;
    couttt ENTER  THE PRODUCT  CODE ntt-;
    cinpkey;

    data1.open(product.txt,iosin);
    if(!data1) {
        coutPRODUCT  DOESN'T  FOUND;
    }
    else {
        data2.open(product1.txt,iosappiosout);
        data1pcodepnamepricedis;
        while(!data1.eof()) {
            if(pkey==pcode) {
                couttPRODUCT  DELETED ;
                token++;
            }
            else {
                data2 
                     pcode 
                     pname 
                     price 
                     disn;
            }
            data1pcodepnamepricedis;
        }
        data1.close();
        data2.close();
        remove(product.txt);
        rename(product1.txt,product.txt);
        if(token==0) {
            couttRECORD NOT FOUND ;
        }
    }
}


void Shoppinglist() {
    fstream data;
    data.open(product.txt,iosin);
    if(!data) coutproduct not available ;
    else {
        couttttt LIST  OF  PRODUCT nn;
        coutttCODEttNAMEttPRICEttDISCOUNT(%)n;
        datapcodepnamepricedis;
        while(!data.eof()) {
            coutntt
                pcodett
                pnamett
                pricett
                disn;
            datapcodepnamepricedis;
        }
    }
    data.close();
}


void Shoppingreceipt() {
    fstream data;
    int code_arr[100],quntity_arr[100];
    int count=0,discount;
    int temp_code,temp_quntity;
    char choice;
    float amount=0;
    float dis=0;
    float total=0;
    data.open(product.txt,iosin);
    if(!data) {
        coutempty market;
    } else {
        data.close();
        list();
m
        
        coutntt   place order n;
        couttt----------------n;
        do {
            couttEnter the product codent-;
            cincode_arr[count];
            couttEnter quntitynt-;
            cinquntity_arr[count];

            for(int i=0; icount; i++) {
                if(code_arr[count]==code_arr[i]) {
                    coutduplicate;
                    goto m;
                }
            }

            couttdo you want to buy another productn;
            coutntEnter y for yes , n for nont-;
            cinchoice;
            count++;
        } while(choice=='y');

        for(int i=0; i=count; i++) coutcode_arr[i]endl;

        coutproduct codetproduct nametpricediscounttprice after discountn;
        for(int i=0; icount; i++) {
            data.open(product.txt,iosin);
            datapcodepnamepricedis;
            while(!data.eof()) {
                if(code_arr[i]==pcode) {
                    amount=pricequntity_arr[i];
                    discount=amount-(amountdis100);
                    total=total+discount;
                    coutpcodett
                        pnamett
                        pricett
                        distt
                        discountn;
                }
                datapcodepnamepricedis;
            }
            data.close();
        }
        coutntTotal Amount  -;
        couttotal;
    }

}

int main() {
    Shopping sp;
    sp.list();
    return 0;
}