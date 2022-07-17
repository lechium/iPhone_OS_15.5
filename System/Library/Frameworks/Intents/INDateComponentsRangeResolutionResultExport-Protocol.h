//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INDateComponentsRange, NSArray;

@protocol INDateComponentsRangeResolutionResultExport <NSObject, JSExport>
+ (id)confirmationRequiredWithDateComponentsRangeToConfirm:(INDateComponentsRange *)arg1;
+ (id)disambiguationWithDateComponentsRangesToDisambiguate:(NSArray *)arg1;
+ (id)successWithResolvedDateComponentsRange:(INDateComponentsRange *)arg1;
- (id)init;
@end
