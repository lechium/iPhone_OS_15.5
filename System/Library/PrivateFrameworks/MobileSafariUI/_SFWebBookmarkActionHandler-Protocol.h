//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/NSObject-Protocol.h>

@class NSArray, WebBookmark, _SFNavigationIntent;

@protocol _SFWebBookmarkActionHandler <NSObject>
- (void)bookmark:(WebBookmark *)arg1 didProduceNavigationIntent:(_SFNavigationIntent *)arg2 userInfo:(id)arg3;
- (void)deleteBookmark:(WebBookmark *)arg1 userInfo:(id)arg2;
- (void)editBookmark:(WebBookmark *)arg1 userInfo:(id)arg2;

@optional
- (void)bookmark:(WebBookmark *)arg1 shareItems:(NSArray *)arg2 userInfo:(id)arg3;
@end
