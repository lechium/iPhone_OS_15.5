//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SAEmailEmail;

@interface SAEmailSend
{
}

+ (id)sendWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x00000000000346a6
+ (id)send;	// IMP=0x0000000000034694
- (_Bool)requiresResponse;	// IMP=0x00000000000346d2
@property(retain, nonatomic) SAEmailEmail *email;
- (id)encodedClassName;	// IMP=0x0000000000034687
- (id)groupIdentifier;	// IMP=0x0000000000034673

@end

