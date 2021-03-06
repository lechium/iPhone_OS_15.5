//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsToday/NTTodayProtoitem-Protocol.h>

@class NSString, NTPBTodaySectionConfigWebEmbed;

@interface NTTodayWebEmbedProtoitem : NSObject <NTTodayProtoitem>
{
    NSString *_identifier;	// 8 = 0x8
    NTPBTodaySectionConfigWebEmbed *_webEmbed;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002ce5d
@property(readonly, copy, nonatomic) NTPBTodaySectionConfigWebEmbed *webEmbed; // @synthesize webEmbed=_webEmbed;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)itemWithContentContext:(id)arg1 operationInfo:(id)arg2 sectionDescriptor:(id)arg3 todayData:(id)arg4 assetFileURLsByRemoteURL:(id)arg5 preferredDynamicSlotAllocation:(unsigned long long)arg6;	// IMP=0x000000000002ccb3
- (id)assetHandlesWithOperationInfo:(id)arg1;	// IMP=0x000000000002cc69
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002cc5e
- (unsigned long long)hash;	// IMP=0x000000000002cbd1
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002ca94
- (id)initWithIdentifier:(id)arg1 webEmbed:(id)arg2;	// IMP=0x000000000002c98b
- (id)init;	// IMP=0x000000000002c846

@end

