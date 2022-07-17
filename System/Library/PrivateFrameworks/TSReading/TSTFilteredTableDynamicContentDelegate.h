//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSReading/TSTLayoutDynamicContentProtocol-Protocol.h>

@class NSString, TSTTableModel;

@interface TSTFilteredTableDynamicContentDelegate : NSObject <TSTLayoutDynamicContentProtocol>
{
    TSTTableModel *mTableModel;	// 8 = 0x8
}

- (_Bool)dynamicContentMustDrawOnMainThread;	// IMP=0x00000000003db643
- (_Bool)cell:(id *)arg1 forCellID:(CDStruct_0441cfb5)arg2;	// IMP=0x00000000003db3e1
- (void)dealloc;	// IMP=0x00000000003db3a6
- (id)initWithTableModel:(id)arg1;	// IMP=0x00000000003db356

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
