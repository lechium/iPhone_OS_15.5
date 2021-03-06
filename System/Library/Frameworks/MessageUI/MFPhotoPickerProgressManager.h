//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MFPhotoPickerProgressManager : NSObject
{
    NSMutableDictionary *_progressItems;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000ecf74
@property(readonly, nonatomic) NSMutableDictionary *progressItems; // @synthesize progressItems=_progressItems;
- (void)_cancelProgressItem:(id)arg1;	// IMP=0x00000000000ece9c
- (void)cancelEverythingAtIndexPath:(id)arg1;	// IMP=0x00000000000ecd82
- (void)cancelEverything;	// IMP=0x00000000000ecaf5
- (double)progressForIndexPath:(id)arg1;	// IMP=0x00000000000ec9f1
- (_Bool)requestExistsForIndexPath:(id)arg1;	// IMP=0x00000000000ec90b
- (_Bool)anyRequestExists;	// IMP=0x00000000000ec834
- (void)setExportSession:(id)arg1 forIndexPath:(id)arg2;	// IMP=0x00000000000ec69b
- (void)setImageRequestID:(int)arg1 forIndexPath:(id)arg2;	// IMP=0x00000000000ec519
- (void)setProgress:(double)arg1 forIndexPath:(id)arg2;	// IMP=0x00000000000ec374
- (id)init;	// IMP=0x00000000000ec300

@end

