//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariSharedUI/NSObject-Protocol.h>

@class NSArray, NSString, WBSTranslationContext;

@protocol WBSTranslationContextTranslating <NSObject>
- (void)translationContext:(WBSTranslationContext *)arg1 translateWebpageContents:(NSArray *)arg2 toTargetLocale:(NSString *)arg3 translationHandler:(void (^)(_WKTextManipulationItem *, NSString *, NSError *))arg4;
@end

