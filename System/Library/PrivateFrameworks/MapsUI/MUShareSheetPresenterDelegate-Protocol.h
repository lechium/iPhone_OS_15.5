//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsUI/NSObject-Protocol.h>

@class MKActivityViewController, MUShareSheetPresenter, NSString;

@protocol MUShareSheetPresenterDelegate <NSObject>
- (void)shareSheetPresenter:(MUShareSheetPresenter *)arg1 postCompletedActivityOfType:(NSString *)arg2 completed:(_Bool)arg3;
- (void)shareSheetPresenter:(MUShareSheetPresenter *)arg1 preCompletedActivityOfType:(NSString *)arg2 completed:(_Bool)arg3;

@optional
- (MKActivityViewController *)shareSheetPresenterRequestsOverridenActivityViewController:(MUShareSheetPresenter *)arg1;
@end

