//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CDMSpanMatchUtils : NSObject
{
}

+ (void)mergeAsrAlternativeIntoSpan:(id)arg1 asrAltSpan:(id)arg2 asrAltCdmTokenChain:(id)arg3 asrAltHypothesis:(id)arg4 asrAltTimingMap:(id)arg5;	// IMP=0x000000000008157d
+ (id)createAsrAlternativeIdentifier:(id)arg1 nameSpace:(id)arg2 nodeIndex:(unsigned int)arg3 backingAppBundleId:(id)arg4 sourceComponent:(int)arg5 asrConfidence:(double)arg6;	// IMP=0x0000000000081434
+ (void)addAsrConfidenceToSpans:(id)arg1 tokenChain:(id)arg2 asrTimingMap:(id)arg3 asrHypothesis:(id)arg4;	// IMP=0x0000000000080bff
+ (_Bool)matcherNameIsSupportedForAsrAlternative:(id)arg1;	// IMP=0x0000000000080b9e
+ (double)calculateAsrConfidenceForCharIndexBegin:(long long)arg1 charIndexEnd:(long long)arg2 asrTimingMap:(id)arg3 asrHypothesis:(id)arg4;	// IMP=0x000000000008065c
+ (_Bool)isSamePosition:(id)arg1 spanB:(id)arg2 asrMapA:(id)arg3 asrMapB:(id)arg4 cdmTokenChainA:(id)arg5 cdmTokenChainB:(id)arg6;	// IMP=0x000000000007f784

@end
