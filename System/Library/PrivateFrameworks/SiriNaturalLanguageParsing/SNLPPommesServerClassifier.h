//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SNLPPommesServerClassifier
{
    float _confidenceThreshold;	// 8 = 0x8
}

+ (id)classifierWithPathURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005149a
@property(nonatomic) float confidenceThreshold; // @synthesize confidenceThreshold=_confidenceThreshold;
- (id)responseForRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000051ebc

@end
