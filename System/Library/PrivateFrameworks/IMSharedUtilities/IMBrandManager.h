//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSUIBrandManager;

@interface IMBrandManager : NSObject
{
    BSUIBrandManager *_brandManager;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000000006b15f
- (void).cxx_destruct;	// IMP=0x000000000006b5c4
@property(retain, nonatomic) BSUIBrandManager *brandManager; // @synthesize brandManager=_brandManager;
- (void)brandWithURI:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006b2c3
- (id)_init;	// IMP=0x000000000006b1de

@end

