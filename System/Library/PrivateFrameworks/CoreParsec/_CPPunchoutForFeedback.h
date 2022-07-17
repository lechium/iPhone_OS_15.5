//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPPunchoutForFeedback-Protocol.h>

@class NSArray, NSData, NSString;

@interface _CPPunchoutForFeedback : PBCodable <_CPPunchoutForFeedback, NSSecureCoding>
{
    int _knownBundleIdentifier;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_label;	// 24 = 0x18
    NSArray *_urls;	// 32 = 0x20
    NSString *_bundleIdentifier;	// 40 = 0x28
    unsigned long long _whichBundleid;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000003a7a5
@property(readonly, nonatomic) unsigned long long whichBundleid; // @synthesize whichBundleid=_whichBundleid;
@property(copy, nonatomic) NSArray *urls; // @synthesize urls=_urls;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003a1f8
- (void)writeTo:(id)arg1;	// IMP=0x0000000000039fc6
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000039fb9
@property(nonatomic) int knownBundleIdentifier; // @synthesize knownBundleIdentifier=_knownBundleIdentifier;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)urlsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000039e9a
- (unsigned long long)urlsCount;	// IMP=0x0000000000039e7d
- (void)addUrls:(id)arg1;	// IMP=0x0000000000039e03
- (void)clearUrls;	// IMP=0x0000000000039de6
- (void)clearBundleid;	// IMP=0x0000000000039d0a
- (id)initWithFacade:(id)arg1;	// IMP=0x0000000000086d88

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSData *jsonData; // @dynamic jsonData;
@property(readonly) Class superclass;

@end
