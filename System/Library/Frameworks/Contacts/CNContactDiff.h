//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface CNContactDiff : NSObject
{
    NSArray *_updates;	// 8 = 0x8
}

+ (id)diffContact:(id)arg1 to:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000e35b6
- (void).cxx_destruct;	// IMP=0x00000000000e3ada
@property(readonly, copy) NSArray *updates; // @synthesize updates=_updates;
- (id)description;	// IMP=0x00000000000e3a40
- (void)applyToMutableContacts:(id)arg1 withIdentifierMap:(id)arg2;	// IMP=0x00000000000e38ee
- (void)applyToMutableContact:(id)arg1 withIdentifierMap:(id)arg2;	// IMP=0x00000000000e3780
- (id)contactByApplyingUpdatesToContact:(id)arg1;	// IMP=0x00000000000e36f1
- (id)initWithUpdates:(id)arg1;	// IMP=0x00000000000e3667
- (_Bool)applyToABPerson:(void *)arg1 logger:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000a4122

@end

