//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CellularPlanManager/CTCellularPlanValidating-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CTCellularPlanResponseCodeParser : NSObject <CTCellularPlanValidating>
{
}

+ (_Bool)validate:(id)arg1;	// IMP=0x000000000000431f
+ (_Bool)validate:(id)arg1 parseTo:(int *)arg2 responseText:(id *)arg3 error:(id *)arg4;	// IMP=0x00000000000041d6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

