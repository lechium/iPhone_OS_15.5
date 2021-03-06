//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/NSObject-Protocol.h>

@class NSString, SXQuickLookLayoutAttributes, SXQuickLookViewController, UIButton, UIImage, UILabel;

@protocol SXQuickLookRenderer <NSObject>
- (void)renderErrorMessage:(NSString *)arg1 view:(UILabel *)arg2;
- (void)renderThumbnailImage:(UIImage *)arg1 view:(UIButton *)arg2;
- (void)render:(SXQuickLookViewController *)arg1 attributes:(SXQuickLookLayoutAttributes *)arg2;
@end

