//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ACDTCCUtilities : NSObject
{
}

+ (struct __CFString *)_TCCServiceForAccountTypeID:(id)arg1;	// IMP=0x00000000000686a1
+ (_Bool)clearAllTCCStatesForAccountTypeID:(id)arg1;	// IMP=0x0000000000068612
+ (id)allTCCStatesForAccountTypeID:(id)arg1;	// IMP=0x00000000000682fc
+ (_Bool)clearTCCStateForClient:(id)arg1 accountTypeID:(id)arg2;	// IMP=0x00000000000681dd
+ (_Bool)setTCCStateForClient:(id)arg1 accountTypeID:(id)arg2 toGranted:(_Bool)arg3;	// IMP=0x0000000000068095
+ (int)TCCStateForClient:(id)arg1 accountTypeID:(id)arg2;	// IMP=0x0000000000067d6e
+ (_Bool)TCCSupportedForAccountTypeID:(id)arg1;	// IMP=0x0000000000067d55

@end
