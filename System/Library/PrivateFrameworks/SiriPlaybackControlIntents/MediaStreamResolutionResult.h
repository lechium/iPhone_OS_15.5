//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INObjectResolutionResult.h>

@interface MediaStreamResolutionResult : INObjectResolutionResult
{
}

+ (id)confirmationRequiredWithObjectToConfirm:(id)arg1;	// IMP=0x0000000000193c30
+ (id)disambiguationWithObjectsToDisambiguate:(id)arg1;	// IMP=0x0000000000193bf0
+ (id)successWithResolvedObject:(id)arg1;	// IMP=0x0000000000193bb0
+ (id)confirmationRequiredWithMediaStreamToConfirm:(id)arg1;	// IMP=0x0000000000193b60
+ (id)disambiguationWithMediaStreamsToDisambiguate:(id)arg1;	// IMP=0x0000000000193af0
+ (id)successWithResolvedMediaStream:(id)arg1;	// IMP=0x0000000000193aa0
- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;	// IMP=0x0000000000193da0

@end
