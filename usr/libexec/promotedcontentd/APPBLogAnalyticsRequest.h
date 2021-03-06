//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSData, NSMutableArray, NSString;

@interface APPBLogAnalyticsRequest : PBRequest
{
    NSString *_bundleID;	// 8 = 0x8
    NSData *_contentiAdID;	// 16 = 0x10
    NSData *_dPID;	// 24 = 0x18
    NSMutableArray *_events;	// 32 = 0x20
    NSData *_iAdID;	// 40 = 0x28
}

+ (Class)eventsType;	// IMP=0x002000000007babd
+ (id)options;	// IMP=0x001000000007b958
- (void).cxx_destruct;	// IMP=0x002000000007caa4
@property(retain, nonatomic) NSMutableArray *events; // @synthesize events=_events;
@property(retain, nonatomic) NSData *dPID; // @synthesize dPID=_dPID;
@property(retain, nonatomic) NSData *contentiAdID; // @synthesize contentiAdID=_contentiAdID;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSData *iAdID; // @synthesize iAdID=_iAdID;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000007c814
- (unsigned long long)hash;	// IMP=0x001000000007c771
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000007c611
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000007c3be
- (void)copyTo:(id)arg1;	// IMP=0x001000000007c274
- (void)writeTo:(id)arg1;	// IMP=0x001000000007c0d1
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000007c0c4
- (id)dictionaryRepresentation;	// IMP=0x001000000007bb7d
- (id)description;	// IMP=0x001000000007bace
- (id)eventsAtIndex:(unsigned long long)arg1;	// IMP=0x001000000007baa0
- (unsigned long long)eventsCount;	// IMP=0x001000000007ba83
- (void)addEvents:(id)arg1;	// IMP=0x001000000007ba19
- (void)clearEvents;	// IMP=0x001000000007b9fc
@property(readonly, nonatomic) _Bool hasDPID;
@property(readonly, nonatomic) _Bool hasContentiAdID;
@property(readonly, nonatomic) _Bool hasBundleID;
@property(readonly, nonatomic) _Bool hasIAdID;

@end

