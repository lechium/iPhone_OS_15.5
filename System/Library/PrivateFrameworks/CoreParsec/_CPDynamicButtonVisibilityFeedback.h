//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPDynamicButtonVisibilityFeedback-Protocol.h>
#import <CoreParsec/_CPProcessableFeedback-Protocol.h>

@class NSArray, NSData, NSString;

@interface _CPDynamicButtonVisibilityFeedback : PBCodable <_CPProcessableFeedback, _CPDynamicButtonVisibilityFeedback, NSSecureCoding>
{
    unsigned long long _timestamp;	// 8 = 0x8
    NSString *_cardSectionIdentifier;	// 16 = 0x10
    NSArray *_visibleDynamicButton2s;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000005ce40
@property(copy, nonatomic) NSArray *visibleDynamicButton2s; // @synthesize visibleDynamicButton2s=_visibleDynamicButton2s;
@property(copy, nonatomic) NSString *cardSectionIdentifier; // @synthesize cardSectionIdentifier=_cardSectionIdentifier;
@property(nonatomic) unsigned long long timestamp;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005cae0
- (void)writeTo:(id)arg1;	// IMP=0x000000000005c943
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000005c936
- (id)visibleDynamicButton2sAtIndex:(unsigned long long)arg1;	// IMP=0x000000000005c919
- (unsigned long long)visibleDynamicButton2sCount;	// IMP=0x000000000005c8fc
- (void)addVisibleDynamicButton2s:(id)arg1;	// IMP=0x000000000005c882
- (void)clearVisibleDynamicButton2s;	// IMP=0x000000000005c865
- (id)init;	// IMP=0x000000000005c786
- (id)initWithFacade:(id)arg1;	// IMP=0x000000000009171a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSData *jsonData; // @dynamic jsonData;
@property(readonly) Class superclass;

@end

