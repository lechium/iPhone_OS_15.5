//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface UIGradient : NSObject
{
    CDStruct_d83abbfb *_values;	// 8 = 0x8
    double _height;	// 16 = 0x10
    struct CGShading *_shader;	// 24 = 0x18
}

- (void)dealloc;	// IMP=0x000000000081e605
- (void)fillRect:(struct CGRect)arg1;	// IMP=0x000000000081e5ca
- (void)fillRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;	// IMP=0x000000000081e48b
- (id)initVerticalWithValues:(CDStruct_d83abbfb *)arg1;	// IMP=0x000000000081e3bb

@end
