//
//  XYZAddToDoItemControllerDelegate.h
//  ToDoList
//
//  Created by 宋伟 on 14-9-27.
//  Copyright (c) 2014年 hellostop. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol XYZAddToDoItemControllerDelegate <NSObject>

- (void) addToDoItem:(NSString*)itemName;

@end
