//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface VSValueType : NSObject
{
    Class _implementationClass;	// 8 = 0x8
    NSArray *_properties;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000ef23
@property(copy, nonatomic) NSArray *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) Class implementationClass; // @synthesize implementationClass=_implementationClass;
- (_Bool)isSuperclassAlsoValueType;	// IMP=0x000000000000eea4

@end
