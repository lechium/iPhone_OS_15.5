//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSString;

@interface SKADatabaseStatus : NSObject
{
    NSString *_channelIdentifier;	// 8 = 0x8
    NSDate *_dateCreated;	// 16 = 0x10
    NSDate *_datePublished;	// 24 = 0x18
    NSDate *_dateReceived;	// 32 = 0x20
    NSDate *_dateExpired;	// 40 = 0x28
    NSData *_rawData;	// 48 = 0x30
    NSString *_uniqueIdentifier;	// 56 = 0x38
}

+ (id)logger;	// IMP=0x0000000000023d09
- (void).cxx_destruct;	// IMP=0x0000000000023dab
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) NSData *rawData; // @synthesize rawData=_rawData;
@property(readonly, copy, nonatomic) NSDate *dateExpired; // @synthesize dateExpired=_dateExpired;
@property(readonly, copy, nonatomic) NSDate *dateReceived; // @synthesize dateReceived=_dateReceived;
@property(readonly, copy, nonatomic) NSDate *datePublished; // @synthesize datePublished=_datePublished;
@property(readonly, copy, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(readonly, copy, nonatomic) NSString *channelIdentifier; // @synthesize channelIdentifier=_channelIdentifier;
- (id)description;	// IMP=0x0000000000023c0a
@property(readonly, nonatomic) _Bool isExpired;
- (id)initWithChannelIdentifier:(id)arg1 dateCreated:(id)arg2 datePublished:(id)arg3 dateReceived:(id)arg4 dateExpired:(id)arg5 rawData:(id)arg6 uniqueIdentifier:(id)arg7;	// IMP=0x0000000000023900
- (id)initWithCoreDataStatus:(id)arg1;	// IMP=0x000000000001c2b6

@end
