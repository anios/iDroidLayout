//
//  LayoutParams.h
//  iDroidLayout
//
//  Created by Tom Quist on 22.07.12.
//  Copyright (c) 2012 Tom Quist. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

enum IDLLayoutParamsSize {
    IDLLayoutParamsSizeMatchParent = -1,
    IDLLayoutParamsSizeWrapContent = -2
};

@interface IDLLayoutParams : NSObject {
    CGFloat _width;
    CGFloat _height;
}

@property (nonatomic, assign) CGFloat width;
@property (nonatomic, assign) CGFloat height;

- (instancetype)initWithWidth:(CGFloat)width height:(CGFloat)height;
- (instancetype)initWithLayoutParams:(IDLLayoutParams *)layoutParams;
- (instancetype)initWithAttributes:(NSDictionary *)attrs;

@end
