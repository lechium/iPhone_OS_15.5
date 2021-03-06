//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FPItem, NSNumber, NSString;

@interface DOCSmartFolderHit
{
    FPItem *_folderItem;	// 24 = 0x18
    unsigned long long _type;	// 32 = 0x20
    NSString *_value;	// 40 = 0x28
    NSNumber *_rowId;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000180a3
@property(retain, nonatomic) NSNumber *rowId; // @synthesize rowId=_rowId;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) FPItem *folderItem; // @synthesize folderItem=_folderItem;
- (id)initWithRowId:(id)arg1 folder:(id)arg2 type:(unsigned long long)arg3 value:(id)arg4 lastUsedDate:(id)arg5 frecency:(double)arg6;	// IMP=0x0000000000017efb
- (id)initWithFolder:(id)arg1 type:(unsigned long long)arg2 value:(id)arg3 lastUsedDate:(id)arg4 frecency:(double)arg5;	// IMP=0x0000000000017ece

@end

