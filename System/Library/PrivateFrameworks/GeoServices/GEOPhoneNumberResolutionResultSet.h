//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PNRPhoneNumberResolutionResultSet;

@interface GEOPhoneNumberResolutionResultSet : NSObject
{
    PNRPhoneNumberResolutionResultSet *_pnrResultSet;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000001561c64
- (void)enumerateResolutionsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000001561aca
- (id)description;	// IMP=0x0000000001561ab4
- (id)initWithPNRResultSet:(id)arg1;	// IMP=0x0000000001561a49

@end

