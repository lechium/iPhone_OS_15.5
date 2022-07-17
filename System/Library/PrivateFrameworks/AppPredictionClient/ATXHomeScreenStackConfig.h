//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/NSSecureCoding-Protocol.h>

@class ATXHomeScreenPage, NSArray, NSString;

@interface ATXHomeScreenStackConfig : NSObject <NSSecureCoding>
{
    _Bool _allowsNewWidget;	// 8 = 0x8
    _Bool _allowsSmartRotate;	// 9 = 0x9
    NSArray *_widgets;	// 16 = 0x10
    unsigned long long _stackLayoutSize;	// 24 = 0x18
    long long _coordinateRow;	// 32 = 0x20
    long long _coordinateColumn;	// 40 = 0x28
    NSString *_identifier;	// 48 = 0x30
    ATXHomeScreenPage *_page;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003db4a
- (void).cxx_destruct;	// IMP=0x000000000003edb0
@property(nonatomic) __weak ATXHomeScreenPage *page; // @synthesize page=_page;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) long long coordinateColumn; // @synthesize coordinateColumn=_coordinateColumn;
@property(nonatomic) long long coordinateRow; // @synthesize coordinateRow=_coordinateRow;
@property(nonatomic) unsigned long long stackLayoutSize; // @synthesize stackLayoutSize=_stackLayoutSize;
@property(copy, nonatomic) NSArray *widgets; // @synthesize widgets=_widgets;
@property(nonatomic) _Bool allowsSmartRotate; // @synthesize allowsSmartRotate=_allowsSmartRotate;
@property(nonatomic) _Bool allowsNewWidget; // @synthesize allowsNewWidget=_allowsNewWidget;
- (id)initFromDictionaryRepresentation:(id)arg1;	// IMP=0x000000000003e94a
- (id)dictionaryRepresentation;	// IMP=0x000000000003e5f5
- (id)compactDescription;	// IMP=0x000000000003e2d6
- (id)description;	// IMP=0x000000000003e213
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003e0ae
- (unsigned long long)hash;	// IMP=0x000000000003e03f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003dee3
- (_Bool)isAppPredictionPanel;	// IMP=0x000000000003de4f
- (_Bool)isPinnedSuggestionsWidget;	// IMP=0x000000000003ddbb
- (_Bool)isPinnedWidget;	// IMP=0x000000000003dd8d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003dba6
- (id)init;	// IMP=0x000000000003db52

@end
