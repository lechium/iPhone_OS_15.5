//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ECEmailAddressParser : NSObject
{
}

+ (_Bool)validateDomain:(id)arg1;	// IMP=0x00000000000136ff
+ (_Bool)validateLocalPart:(id)arg1;	// IMP=0x00000000000133fe
+ (_Bool)validateDisplayName:(id)arg1;	// IMP=0x00000000000133d0
+ (_Bool)_validateString:(id)arg1 withFunction:(CDUnknownFunctionPointerType)arg2;	// IMP=0x0000000000013288
+ (_Bool)parseString:(id)arg1 emailAddressList:(id *)arg2;	// IMP=0x00000000000130d4
+ (_Bool)parseEmailAddressString:(id)arg1 displayName:(id *)arg2 localPart:(id *)arg3 domain:(id *)arg4 groupList:(id *)arg5;	// IMP=0x0000000000012b7b

@end

