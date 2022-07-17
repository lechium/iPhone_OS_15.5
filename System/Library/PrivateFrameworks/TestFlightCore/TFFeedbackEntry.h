//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TFFeedbackEntry : NSObject
{
    unsigned long long _type;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001c161
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)initWithType:(unsigned long long)arg1 identifier:(id)arg2 title:(id)arg3;	// IMP=0x000000000001c083

@end
