//
//  HPKViewConfig.h
//  HybridPageKit
//
//  Created by dequanzhu.
//  Copyright © 2018 HybridPageKit. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface HPKViewConfig : NSObject

@property(nonatomic,assign,readwrite) CGFloat lastReadPostion;

@property(nonatomic,assign,readwrite) CGFloat componentsGap;

@property(nonatomic,assign,readwrite) CGFloat scrollWaitMaxRunloops;

@end
