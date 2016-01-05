//
//  ZXTestViewController.h
//  Weibo_1
//
//  Created by zhengxiang on 15/12/16.
//  Copyright © 2015年 Zheng Xiang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZXTestViewController : UIViewController<UITextViewDelegate, UIActionSheetDelegate, UINavigationControllerDelegate,UIImagePickerControllerDelegate>
{
    UITextView *_textEditor;
    UIAlertController *alertController;
    NSString *filePath;
}

@end
