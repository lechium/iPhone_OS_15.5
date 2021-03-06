//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface VUIAppDocumentRefreshEventDescriptor
{
    unsigned long long _delayInSeconds;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000d4948
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long delayInSeconds; // @synthesize delayInSeconds=_delayInSeconds;
- (id)description;	// IMP=0x00000000000d4734
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d45a4
- (unsigned long long)hash;	// IMP=0x00000000000d452c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d4521
- (id)initWithEventType:(unsigned long long)arg1 delayInSeconds:(unsigned long long)arg2 name:(id)arg3;	// IMP=0x00000000000d4432
- (id)initWithEventType:(unsigned long long)arg1;	// IMP=0x00000000000d43c3

@end

