//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLSTemporalClusterEvent : NSObject
{
    unsigned char _category;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
}

+ (unsigned char)_categoryFromPortraitEventCategory:(unsigned char)arg1;	// IMP=0x0000000000015501
- (void).cxx_destruct;	// IMP=0x00000000000153c9
@property(readonly, nonatomic) unsigned char category; // @synthesize category=_category;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithPortraitEvent:(id)arg1;	// IMP=0x000000000001544f
- (id)initWithName:(id)arg1 category:(unsigned char)arg2;	// IMP=0x00000000000153d9

@end
