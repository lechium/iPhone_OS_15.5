//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmailDaemon/MLFeatureProvider-Protocol.h>

@class NSDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface EDPromotionMLModelInput : NSObject <MLFeatureProvider>
{
    NSDictionary *_header_key_filtered;	// 8 = 0x8
    double _to_count;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000187227
@property(nonatomic) double to_count; // @synthesize to_count=_to_count;
@property(retain, nonatomic) NSDictionary *header_key_filtered; // @synthesize header_key_filtered=_header_key_filtered;
- (id)featureValueForName:(id)arg1;	// IMP=0x000000000018712c
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithHeader_key_filtered:(id)arg1 to_count:(double)arg2;	// IMP=0x000000000018707e

@end
