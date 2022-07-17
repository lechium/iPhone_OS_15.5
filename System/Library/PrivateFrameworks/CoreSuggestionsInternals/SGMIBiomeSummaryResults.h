//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface SGMIBiomeSummaryResults : NSObject
{
    NSDictionary *_biomeSummaryByMessage;	// 8 = 0x8
    NSDictionary *_biomeMessageIdByPersistentId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000201e1d
@property(readonly, nonatomic) NSDictionary *biomeMessageIdByPersistentId; // @synthesize biomeMessageIdByPersistentId=_biomeMessageIdByPersistentId;
@property(readonly, nonatomic) NSDictionary *biomeSummaryByMessage; // @synthesize biomeSummaryByMessage=_biomeSummaryByMessage;
- (id)initWithBiomeSummaryByMessage:(id)arg1 biomeMessageIdByPersistentId:(id)arg2;	// IMP=0x0000000000201d70

@end
