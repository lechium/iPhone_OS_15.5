//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UITableView;
@protocol NTKComplicationPickerListProvider;

@interface NTKCFaceDetailComplicationCellProvider : NSObject
{
    UITableView *_tableView;	// 8 = 0x8
    id <NTKComplicationPickerListProvider> _listProvider;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000021f1e7
@property(retain, nonatomic) id <NTKComplicationPickerListProvider> listProvider; // @synthesize listProvider=_listProvider;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (id)cellForItem:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000000021ec58
- (id)initWithTableView:(id)arg1 listProvider:(id)arg2;	// IMP=0x000000000021ebbf

@end

