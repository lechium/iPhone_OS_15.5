//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/NSObject-Protocol.h>

@class CompletionProvider, NSString, UIWindow;

@protocol CompletionProviderDelegate <NSObject>
- (UIWindow *)windowHostingCompletionProvider:(CompletionProvider *)arg1;
- (void)completionProviderDidFail:(CompletionProvider *)arg1;
- (void)completionProvider:(CompletionProvider *)arg1 didFinishCompletingString:(NSString *)arg2;
@end

