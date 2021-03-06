//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OfficeImport/NSObject-Protocol.h>

@class OITSUFlushingManager;

@protocol TSUiOSMemoryWarningFlushable <NSObject>
- (void)flush;

@optional
- (int)flushCost;
- (int)reloadCost;
- (void)setFlushingManager:(OITSUFlushingManager *)arg1;
@end

