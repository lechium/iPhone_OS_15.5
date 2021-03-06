//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VKBuildingGroup
{
    struct optional<md::MeshSet<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh, ggl::BuildingFlatStroke::DefaultVbo>> _strokeMeshInfo;	// 2616 = 0xa38
    struct optional<md::MeshSet<ggl::PolygonBase::CompressedMeshMesh, ggl::PolygonBase::CompressedVbo>> _fillMeshInfoForPointyRoofs;	// 2776 = 0xad8
    struct vector<std::shared_ptr<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh>, std::allocator<std::shared_ptr<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh>>> _strokeMeshes;	// 2936 = 0xb78
    struct vector<std::shared_ptr<ggl::PolygonBase::CompressedMeshMesh>, std::allocator<std::shared_ptr<ggl::PolygonBase::CompressedMeshMesh>>> _fillMeshesForPointyRoofs;	// 2960 = 0xb90
    struct unique_ptr<ggl::MeshVendor<ggl::BuildingFacade::BuildingMesh>, std::default_delete<ggl::MeshVendor<ggl::BuildingFacade::BuildingMesh>>> _extrusionFillMeshVendor;	// 2984 = 0xba8
    struct unique_ptr<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>, std::default_delete<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>>> _extrusionStrokeMeshVendor;	// 2992 = 0xbb0
    struct unique_ptr<ggl::MeshVendor<ggl::BuildingPointyRoof::BuildingMesh>, std::default_delete<ggl::MeshVendor<ggl::BuildingPointyRoof::BuildingMesh>>> _pointyRoofFillMeshVendor;	// 3000 = 0xbb8
    struct unique_ptr<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>, std::default_delete<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>>> _pointyRoofStrokeMeshVendor;	// 3008 = 0xbc0
    struct array<std::vector<std::vector<FeatureRange>>, 16UL> _extrusionFillCullingGroups;	// 3016 = 0xbc8
    struct array<std::vector<std::vector<FeatureRange>>, 16UL> _extrusionStrokeCullingGroups;	// 3400 = 0xd48
    struct array<std::vector<std::vector<FeatureRange>>, 16UL> _fillCullingGroupsForPointyRoofs;	// 3784 = 0xec8
    struct array<std::vector<std::vector<FeatureRange>>, 16UL> _pointyRoofFillCullingGroups;	// 4168 = 0x1048
    struct array<std::vector<std::vector<FeatureRange>>, 16UL> _pointyRoofStrokeCullingGroups;	// 4552 = 0x11c8
    struct vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>, std::allocator<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>> _styleQueries;	// 4936 = 0x1348
    struct vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>, std::allocator<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>> _flatRoofStyleQueries;	// 4960 = 0x1360
    struct vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>, std::allocator<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>> _selectedStyleQueries;	// 4984 = 0x1378
    struct vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>, std::allocator<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>> _selectedFlatRoofStyleQueries;	// 5008 = 0x1390
}

- (id).cxx_construct;	// IMP=0x00000000006501fc
- (void).cxx_destruct;	// IMP=0x0000000000650011
- (void)updateWithStyleManager:(const void *)arg1;	// IMP=0x000000000064f91a
- (_Bool)addPointyRoofForBuilding:(void *)arg1 buildingModel:(unsigned char)arg2 scaleThreshold:(float)arg3 styleIndex:(float)arg4;	// IMP=0x000000000064e849
- (_Bool)canConstructPointyRoofForPolygon:(void *)arg1 building:(void *)arg2 buildingModel:(unsigned char)arg3 scaleThreshold:(float)arg4;	// IMP=0x000000000064e740
- (void)addExtrusionForBuilding:(void *)arg1 index:(unsigned long long)arg2 ofTotal:(unsigned long long)arg3;	// IMP=0x000000000064d05c
- (void)addBuilding:(void *)arg1 index:(unsigned long long)arg2 ofTotal:(unsigned long long)arg3 accessor:(struct ResourceAccessor *)arg4 triangulator:(void *)arg5 prepareExtrusion:(_Bool)arg6 forRoofStyle:(unsigned char)arg7 scaleThreshold:(float)arg8;	// IMP=0x000000000064c5fb
- (void)didFinishAddingData;	// IMP=0x000000000064c40a
- (void)willAddDataWithAccessor:(struct ResourceAccessor *)arg1;	// IMP=0x000000000064bec5
- (void)prepareForBuilding:(void *)arg1 forRoofStyle:(unsigned char)arg2 scaleThreshold:(float)arg3;	// IMP=0x000000000064a93f
- (const void *)commitRangesToPointyRoofStrokeRenderItemBatcher:(void *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3 featureIdPredicate:(function_ce5c9822)arg4;	// IMP=0x000000000064a879
- (const void *)commitRangesToPointyRoofFillRenderItemBatcher:(void *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3 featureIdPredicate:(function_ce5c9822)arg4;	// IMP=0x000000000064a7b3
- (const void *)commitRangesToPointyRoofTopRenderItemBatcher:(void *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3 featureIdPredicate:(function_ce5c9822)arg4;	// IMP=0x000000000064a6ed
- (const void *)commitRangesToExtrusionStrokeRenderItemBatcher:(void *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3 featureIdPredicate:(function_ce5c9822)arg4;	// IMP=0x000000000064a627
- (const void *)commitRangesToExtrusionFillRenderItemBatcher:(void *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3 featureIdPredicate:(function_ce5c9822)arg4;	// IMP=0x000000000064a561
- (void *)styleQueriesForPointyRoofs:(_Bool)arg1 selected:(_Bool)arg2;	// IMP=0x000000000064a529
- (unsigned char)maxAttributeSetsPerGroup;	// IMP=0x000000000064a51e
- (const void *)pointyRoofStrokeMeshVendor;	// IMP=0x000000000064a50d
- (const void *)pointyRoofFillMeshVendor;	// IMP=0x000000000064a4fc
- (void *)fillMeshesForPointyRoofs;	// IMP=0x000000000064a4ec
- (const void *)extrusionStrokeMeshVendor;	// IMP=0x000000000064a4db
- (const void *)extrusionFillMeshVendor;	// IMP=0x000000000064a4ca
- (void *)strokeMeshes;	// IMP=0x000000000064a4ba
- (id)initWithStyleQuery:(void *)arg1 tileZoom:(float)arg2 fixedAroundCentroid:(const void *)arg3 contentScale:(float)arg4;	// IMP=0x0000000000649f1e

@end

