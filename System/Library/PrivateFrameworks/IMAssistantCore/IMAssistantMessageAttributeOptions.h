//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IMAssistantMessageAttributeOptions : NSObject
{
    unsigned long long _attributes;	// 8 = 0x8
}

+ (id)optionsWithAttributes:(unsigned long long)arg1 sanitizer:(id)arg2;	// IMP=0x0000000000001b28
+ (id)optionsWithAttributes:(unsigned long long)arg1;	// IMP=0x0000000000001af9
@property(readonly, nonatomic) unsigned long long attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) _Bool includeUnread;
@property(readonly, nonatomic) _Bool includeRead;
- (id)initWithAttributes:(unsigned long long)arg1 sanitizer:(id)arg2;	// IMP=0x0000000000001a51
- (id)initWithAttributes:(unsigned long long)arg1;	// IMP=0x0000000000001a3d

@end

