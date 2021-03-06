//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

#import <Home/HFPropertyListConvertible-Protocol.h>
#import <Home/InnerContentHash-Protocol.h>

@class NSString;

@interface NSArray (HFUtilities) <HFPropertyListConvertible, InnerContentHash>
+ (id)hf_arrayWithNumbersInRange:(struct _NSRange)arg1 stride:(unsigned long long)arg2;	// IMP=0x0000000000034a7e
- (id)hf_prettyDescription;	// IMP=0x00000000000758f9
- (unsigned long long)computeHashFromContents;	// IMP=0x0000000000186b1f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

