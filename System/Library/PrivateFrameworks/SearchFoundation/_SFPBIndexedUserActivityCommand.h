//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBIndexedUserActivityCommand-Protocol.h>

@class NSData, NSString;

@interface _SFPBIndexedUserActivityCommand : PBCodable <_SFPBIndexedUserActivityCommand, NSSecureCoding>
{
    NSString *_userActivityRequiredString;	// 8 = 0x8
    NSString *_applicationBundleIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000ac9ea
@property(copy, nonatomic) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
@property(copy, nonatomic) NSString *userActivityRequiredString; // @synthesize userActivityRequiredString=_userActivityRequiredString;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000ac85c
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000ac79e
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000ac60e
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ac304
- (void)writeTo:(id)arg1;	// IMP=0x00000000000ac263
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000ac256
- (id)initWithFacade:(id)arg1;	// IMP=0x00000000001a9042

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

