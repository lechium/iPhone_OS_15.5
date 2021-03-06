//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SKAuthenticationPresentEvent
{
    int _passwordType;	// 24 = 0x18
    NSString *_password;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000bba2
@property(readonly, nonatomic) int passwordType; // @synthesize passwordType=_passwordType;
@property(readonly, copy, nonatomic) NSString *password; // @synthesize password=_password;
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x000000000000ba20
- (id)initWithPasswordType:(int)arg1 password:(id)arg2;	// IMP=0x000000000000b98d

@end

