//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EKCalendarSuggestionNotification, LSApplicationProxy, NSString;

@interface CalendarMessageSuggestionCell
{
    NSString *_fromString;	// 8 = 0x8
    NSString *_dateString;	// 16 = 0x10
    NSString *_appNameString;	// 24 = 0x18
    NSString *_suggestionOriginSenderName;	// 32 = 0x20
    LSApplicationProxy *_applicationProxy;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000009ecf7
- (void)_updateSuggestionPropertiesWithNotification:(id)arg1;	// IMP=0x001000000009ea1a
@property(retain, nonatomic) EKCalendarSuggestionNotification *notification; // @dynamic notification;
- (_Bool)notificationIsCancelled;	// IMP=0x001000000009e8de
- (_Bool)showAsCancelledOrDeclined;	// IMP=0x001000000009e895
- (id)actions;	// IMP=0x001000000009e81e
- (id)_appNameString;	// IMP=0x001000000009e794
- (id)_locationString;	// IMP=0x001000000009e6d9
- (id)_dateString;	// IMP=0x001000000009e3e7
- (id)_fromString;	// IMP=0x001000000009e1e4
- (id)bodyStringDict;	// IMP=0x001000000009e096
- (id)titleStrings;	// IMP=0x001000000009dfe1
- (void)updateAuthor;	// IMP=0x001000000009deb0
- (id)provideAuthorView;	// IMP=0x001000000009de97
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x001000000009de46

@end

