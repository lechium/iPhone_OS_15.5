//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEORPPoiEnrichment, NSString;

__attribute__((visibility("hidden")))
@interface UGCSubmissionLookupResult : NSObject
{
    long long _status;	// 8 = 0x8
    NSString *_parentSubmissionIdentifier;	// 16 = 0x10
    GEORPPoiEnrichment *_previousSubmission;	// 24 = 0x18
}

+ (long long)_statusFromError:(id)arg1;	// IMP=0x0040000000a2dab5
- (void).cxx_destruct;	// IMP=0x0020000000a2dba6
@property(readonly, nonatomic) GEORPPoiEnrichment *previousSubmission; // @synthesize previousSubmission=_previousSubmission;
@property(readonly, nonatomic) NSString *parentSubmissionIdentifier; // @synthesize parentSubmissionIdentifier=_parentSubmissionIdentifier;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
- (id)initWithError:(id)arg1;	// IMP=0x0010000000a2da45
- (id)initWithSubmissionIdentifier:(id)arg1 previousSubmission:(id)arg2;	// IMP=0x0010000000a2d9a4

@end

