////
//// Created by 蓝一潇 on 2018/5/2.
////
//#include <iostream>
//#include <cmath>
//#include <iomanip>
//using namespace std;
//class suduku{
//public:
//    int num[20][20];
//    bool ok = true;
//    suduku(int happy[20][20]){
//        int i,j;
//        for(i = 1;i<=9;i++){
//            for(j = 1;j<=9;j++){
//                num[i][j] = *(*(happy+i)+j);
//            }
//        }
////        for(i = 1;i<=9;i++){
////            for(j = 1;j<=9;j++){
////                cout<<num[i][j];
////            }
////            cout<<endl;
////        }
//    }
//    int isItRight(){
//        int i,j;
//        int indexX,indexY;
//        int couter[10] = {0};
//        ok = true;
////        for(i = 1;i<=9;i++){
////            cout<<couter[i];
////        }
//        for(i = 1;i<=9;i++){
//            for(j=1;j<=9;j++){
//                couter[num[i][j]]++;
//            }
////            cout<<couter[9]<<"xixi"<<endl;
//            for(j=1;j<=9;j++){
//                if(couter[j]>=2){
////                    cout<<couter[j]<<j;
//                    ok = false;
//                }
//                couter[j] = 0;
//            }
//            if(!ok){
//                cout<<"Oh,No!"<<endl;
//                return 0;
//            }
//        }
//        for(i = 1;i<=9;i++){
//            for(j=1;j<=9;j++){
//                couter[num[j][i]]++;
//            }
//            for(j=1;j<=9;j++){
//                if(couter[j]>=2){
////                    cout<<couter[j]<<j;
//                    ok = false;
//                }
//                couter[j] = 0;
//            }
//            if(!ok){
//                cout<<"Oh,No!"<<endl;
//                return 0;
//            }
//        }
//
//        for(indexX=1;indexX<=9;indexX=indexX+3){
//           for(indexY=1;indexY<=9;indexY=indexY+3) {
//               for(i=indexX;i<=indexX+2;i++){
//                   for(j=indexY;j<=indexY+2;j++){
//                       couter[num[i][j]]++;
//                   }
//               }
//               for(j=1;j<=9;j++){
//                   if(couter[j]>=2){
////                    cout<<couter[j]<<j;
//                       ok = false;
//                   }
//                   couter[j] = 0;
//               }
//               if(!ok){
//                   cout<<"Oh,No!"<<endl;
//                   return 0;
//               }
//           }
//        }
//
//
//
//        if (ok){
//            cout<<"Yeah!"<<endl;
//        }
//        return 0;
//    }
//
//
//};
//
//int main(){
//    int happy[20][20]={0};
//    int i,j,k,l;
//    cin>>k;
//    for(l=1;l<=k;l++){
//      for(i = 1;i<=9;i++){
//        for(j = 1;j<=9;j++){
//            cin>>happy[i][j];
//        }
//      }
//    suduku a(happy);
//    a.isItRight();
//    }
////    cout<<"end"<<endl;
//    return 0;
//}
