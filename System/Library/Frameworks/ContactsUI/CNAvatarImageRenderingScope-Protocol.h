//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/NSObject-Protocol.h>

@class PRMonogramColor, UIColor;

@protocol CNAvatarImageRenderingScope <NSObject>
- (UIColor *)strokeColor;
- (double)strokeWidth;
- (PRMonogramColor *)color;
- (_Bool)rightToLeft;
- (unsigned long long)avatarViewBackgroundStyle;
- (unsigned long long)avatarViewStyle;
- (struct CGSize)pointSize;
- (double)scale;
@end
