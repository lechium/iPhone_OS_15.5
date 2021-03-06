//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface OBDevice : NSObject
{
    _Bool _hasHomeButton;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
    unsigned long long _templateType;	// 24 = 0x18
}

+ (id)currentDevice;	// IMP=0x000000000001decc
@property(nonatomic) _Bool hasHomeButton; // @synthesize hasHomeButton=_hasHomeButton;
@property(nonatomic) unsigned long long templateType; // @synthesize templateType=_templateType;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (unsigned long long)templateTypeForBoundsWidth:(double)arg1;	// IMP=0x000000000001e168

@end

