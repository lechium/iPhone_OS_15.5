//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface NTKObjectPropertyInfo : NSObject
{
    _Bool _isDynamic;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_typeString;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000293a98
@property(copy, nonatomic) NSString *typeString; // @synthesize typeString=_typeString;
@property(nonatomic) _Bool isDynamic; // @synthesize isDynamic=_isDynamic;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;

@end
