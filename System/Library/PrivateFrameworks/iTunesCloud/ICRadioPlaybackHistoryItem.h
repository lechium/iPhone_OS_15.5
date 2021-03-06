//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>
#import <iTunesCloud/NSMutableCopying-Protocol.h>
#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSMutableDictionary, NSNumber;

@interface ICRadioPlaybackHistoryItem : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSDate *_expirationDate;	// 8 = 0x8
    NSNumber *_pauseTime;	// 16 = 0x10
    NSDictionary *_serverTrackInfo;	// 24 = 0x18
    NSDate *_skipDate;	// 32 = 0x20
    long long _storeIdentifier;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000014eb42
- (void).cxx_destruct;	// IMP=0x000000000014e92f
@property(readonly, nonatomic) long long storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(readonly, copy, nonatomic) NSDate *skipDate; // @synthesize skipDate=_skipDate;
@property(readonly, copy, nonatomic) NSNumber *pauseTime; // @synthesize pauseTime=_pauseTime;
@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000014e85a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000014e6ee
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000014e694
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000014e54d
- (unsigned long long)hash;	// IMP=0x000000000014e4e1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000014e487
@property(readonly, copy, nonatomic) NSDictionary *serverTrackInfo;
@property(readonly, copy, nonatomic) NSMutableDictionary *propertyListRepresentation;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
- (id)initWithTrack:(id)arg1;	// IMP=0x000000000014e1e0

@end

