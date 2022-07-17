//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EDAMNotFoundException, EDAMUserException, EDAMUserIdentity;

@interface EDAMManageNotebookSharesError
{
    EDAMUserIdentity *_userIdentity;	// 8 = 0x8
    EDAMUserException *_userException;	// 16 = 0x10
    EDAMNotFoundException *_notFoundException;	// 24 = 0x18
}

+ (id)structFields;	// IMP=0x00000000001ad2f1
+ (id)structName;	// IMP=0x00000000001ad2e4
- (void).cxx_destruct;	// IMP=0x00000000001ad4f3
@property(retain, nonatomic) EDAMNotFoundException *notFoundException; // @synthesize notFoundException=_notFoundException;
@property(retain, nonatomic) EDAMUserException *userException; // @synthesize userException=_userException;
@property(retain, nonatomic) EDAMUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;

@end
